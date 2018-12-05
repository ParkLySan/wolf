/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raybox.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 14:58:03 by litoulza          #+#    #+#             */
/*   Updated: 2018/12/05 18:12:03 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

dirfrac.x = 1.0f / r.dir.x;
dirfrac.y = 1.0f / r.dir.y;
dirfrac.z = 1.0f / r.dir.z;

float t1;
float t2;
float t3;
float t4;
float t5;
float t6;
float tmin;
float tmax;

t1 = (lb.x - r.org.x)*dirfrac.x;
t2 = (rt.x - r.org.x)*dirfrac.y;
t3 = (lb.y - r.org.y)*dirfrac.y;
t4 = (rt.y - r.org.y)*dirfrac.y;
t5 = (lb.z - r.org.z)*dirfrac.z;
t6 = (rt.z - r.org.z)*dirfrac.z;
tmin = max(max(min(t1, t2), min(t3, t4)), min(t5, t6));
tmax = min(min(max(t1, t2), max(t3, t4)), max(t5, t6));

if (tmax < 0)
{
	t = tmax;
	return(0);
}

if (tmin > tmax)
{
	t = tmax;
	return(0);
}

else
{
	t = tmin;
	return(1);
}

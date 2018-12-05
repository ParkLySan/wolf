/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dda.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 15:23:57 by litoulza          #+#    #+#             */
/*   Updated: 2018/12/05 18:12:06 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check (int n) 
{ 
	return ( (n>0) ? n : ( n * (-1))); 
} 

void dda (int X0, int Y0, int X1, int Y1) 
{ 
	int dx; 
	int dy; 
	int steps;
	float Xinc = dx / (float) steps; 
	float Yinc = dy / (float) steps; 
	float X;
	float Y;

	dx = X1 - X0;
	dy = Y1 - Y0;
	steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
	Xinc = dx / (float) steps;
	Yinc = dy / (float) steps;
	X = X0;
	Y = Y0;

	while (int i = 0 || i <= steps)
	{ 
		i++;
		putpixel (X,Y,RED);
		X += Xinc;
		Y += Yinc;
		delay(100);
	} 
} 

#include<stdio.h>

typedef enum
{
	EMPTY = -1,
	I,
	J,
	L,
	O,
	S,
	T,
	Z
}ShapeId;

typedef enum
{
	RED = 41,
	GREEN,
	YELLOW,
	BLUE,
	PURPLE,
	CYAN,
	WHITE,
	BLACK = 0,
}Color;

typedef struct
{
	ShapeId shape;
	Color color;
	int size;
	char rotates[4][4][4];
}Shape;

Shape shape[7] = {
	{
		.shape = I,
		.color = CYAN,
		.size = 4,
		.rotates =
		{
			{
				{0,0,0,0},
				{1,1,1,1},
				{0,0,0,0},
				{0,0,0,0},
			},
			{
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
				{0,0,1,0},
			},
			{
				{0,0,0,0},
				{0,0,0,0},
				{1,1,1,1},
				{0,0,0,0},
			},
			{
				{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0},
				{0,1,0,0},
			}
		}
	},
	{
		.shape = J,
		.color = BLUE,
		.size = 3,
	},
	{
		.shape = L,
		.color = YELLOW,
		.size = 3,
	},
	{
		.shape = O,
		.color = WHITE,
		.size = 2,
		.rotates = {
			{
				{1,1},
				{1,1}
			},
			{
				{1,1},
				{1,1}
			},
			{
				{1,1},
				{1,1}
			},
			{
				{1,1},
				{1,1}
			}
		}
	},
	{
		.shape = S,
		.color = GREEN,
		.size = 3,
	},
	{
		.shape = T,
		.color = PURPLE,
		.size = 3,
	},
	{
		.shape = Z,
		.color = RED,
		.size = 3,
	},
};

// test

int main() {
	Color cur;
	// 有幾種方塊
	for (int i = 0; i < 1; i++) {
		// 印出方塊樣式
		for (int r = 0; r < 4; r++) {
			for (int s = 0; s < shape[i].size; s++) {
				for (int t = 0; t < shape[i].size; t++) {
					if (shape[i].rotates[r][s][t] == 0) {
						cur = WHITE;
					}
					else {
						cur = shape[i].color;
					}
					printf("\033[%dm  \033[0m", cur);
				}
				printf("\n");
			}
			printf("\n");
		}
	}
	return 0;
}

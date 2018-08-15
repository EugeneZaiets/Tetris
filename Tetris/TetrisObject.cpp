#include "TetrisObject.h"
TetrisObject::TetrisObject(){
	int TObject[7][4][5][5] =
	{
		{
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			}
		},
		{
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 2, 1, 1 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 2, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 1, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 1, 1, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 2, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			}
		},
		{
			{
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 2, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 2, 1, 0 },
				{ 0, 1, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 1, 0, 0 },
				{ 0, 0, 2, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 1, 0 },
				{ 0, 1, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			}
		},
		{
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 2, 0, 0 },
				{ 0, 1, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 0, 0, 0 },
				{ 0, 1, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 0, 2, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 2, 1, 0 },
				{ 0, 0, 0, 1, 0 },
				{ 0, 0, 0, 0, 0 }
			}
		},
		{
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 1, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 2, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 1, 2, 0, 0 },
				{ 0, 1, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},



			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 1, 0, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			}
		},
		{
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 0, 1, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 1, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 0, 0, 0 },
				{ 0, 1, 2, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 1, 0 },
				{ 0, 1, 2, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			}
		},
		{
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 2, 1, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 1, 2, 1, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 1, 2, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			},
			{
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 1, 0, 0 },
				{ 0, 1, 2, 1, 0 },
				{ 0, 0, 0, 0, 0 },
				{ 0, 0, 0, 0, 0 }
			}
		}


	};
	int TObjectInitPos[7][4][2] =
	{
		{
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -3 }
		},
		{
			{ -2, -2 },
			{ -2, -3 },
			{ -2, -2 },
			{ -2, -3 }
		},
		{
			{ -2, -3 },
			{ -2, -2 },
			{ -2, -2 },
			{ -2, -2 }
		},
		{
			{ -2, -3 },
			{ -2, -2 },
			{ -2, -3 },
			{ -2, -3 }
		},
		{
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -2 }
		},
		{
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -2 }
		},
		{
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -3 },
			{ -2, -2 }
		},
	};
	memcpy(_TObject, TObject, sizeof(_TObject));
	memcpy(_pos, TObjectInitPos, sizeof(_pos));
}
int TetrisObject::GetInitPosX(int TObject, int Rotation){ 
	return _pos[TObject][Rotation][0]; }
int TetrisObject::GetInitPosY(int TObject, int Rotation){ 
	return _pos[TObject][Rotation][1];
}
int TetrisObject::GetBlock(int TObject, int Rotation, int X, int Y){ 
	return  _TObject[TObject][Rotation][X][Y]; 
}
TetrisObject::~TetrisObject(){
	exit(7);
}


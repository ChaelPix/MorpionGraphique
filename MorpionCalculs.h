#include <iostream>
#include <string>

#define Player 1
#define AI 2
int grid[9];
int winConditions[][3] = { {0, 1, 2}, {0, 3, 6}, {0, 4, 8}, {1, 4, 7}, {2, 4, 6}, {2, 5, 8}, {6, 7, 8}, {3, 4, 5} };
int totalCase = 0;

int playerScore;
int aiScore;
int drawScore;

bool isOver;

void ResetGrid()
{
	totalCase = 0;
	isOver = false;
	for (int i = 0; i < 9; i++) //Reset la grille
	{
		grid[i] = 0;
	}
}

bool isGameOver()
{
	return isOver;
}

void SaveScore(int scoreId)
{
	isOver = true;
	switch (scoreId)
	{
		case Player: playerScore++; break;
		case AI: aiScore++; break;
		default: drawScore++;
	}
}

int GetScore(int scoreId)
{
	switch (scoreId)
	{
	case Player: return playerScore;
	case AI: return aiScore;
	default: return drawScore;
	}
}

bool HasSomeoneWon(int playerId)
{
	bool hasAWinner = false;
	for (int i = 0; i < 8; i++)
	{
		int pos[3];
		for (int j = 0; j < 3; j++)			//Récupère la combinaison gagnante
		{
			pos[j] = winConditions[i][j];
		}

		
		if (((playerId == grid[pos[0]]) && grid[pos[0]] == grid[pos[1]]) && grid[pos[1]] == grid[pos[2]]) //Compare si les 3 positions ont le même character
		{
			hasAWinner = true;
			//winnerId == playerId;
			break;
		}
	}

	return hasAWinner;
}

void SetCase(int id, int playerId)
{
	grid[id] = playerId;
	totalCase++;
}

bool isDraw()
{
	return totalCase == 9;
}

/// <summary>
/// playerId - 1 : Player, 2 : AI
/// </summary>
bool IsCaseEmpty(int id)
{
	bool isCaseEmpty = grid[id] == 0;
	return isCaseEmpty;
}

int AICasePicker()
{
	//l'ai regarde si elle est en mesure de gagner
	for (int i = 0; i < 8; i++)
	{
		int pos[3];
		for (int j = 0; j < 3; j++)			//Récupère les combinaison gagnantes
		{
			pos[j] = winConditions[i][j];
		}

		// Si l'ai a 2/3 de la combi et que la case est vide, l'ai comblera
		if (((AI == grid[pos[1]]) && grid[pos[1]] == grid[pos[2]]) && grid[pos[0]] == 0)
			return pos[0];

		if (((AI == grid[pos[0]]) && grid[pos[0]] == grid[pos[2]]) && grid[pos[1]] == 0)
			return pos[1];

		if (((AI == grid[pos[0]]) && grid[pos[0]] == grid[pos[1]]) && grid[pos[2]] == 0)
			return pos[2];
	}

	//l'ai regarde si elle peut empecher le joueur de gagner
	for (int i = 0; i < 8; i++)
	{
		int pos[3];
		for (int j = 0; j < 3; j++)			//Récupère les combinaison gagnantes
		{
			pos[j] = winConditions[i][j];
		}

		// Si le joueur a 2/3 de la combi et que la case est vide, l'ai comblera
		if (((Player == grid[pos[1]]) && grid[pos[1]] == grid[pos[2]]) && grid[pos[0]] == 0)
			return pos[0];

		if (((Player == grid[pos[0]]) && grid[pos[0]] == grid[pos[2]]) && grid[pos[1]] == 0)
			return pos[1];

		if (((Player == grid[pos[0]]) && grid[pos[0]] == grid[pos[1]]) && grid[pos[2]] == 0)
			return pos[2];
	}

	//l'ai regarde si elle peut mettre 2 cases
	for (int i = 0; i < 8; i++)
	{
		int pos[3];
		for (int j = 0; j < 3; j++)			//Récupère les combinaison gagnantes
		{
			pos[j] = winConditions[i][j];
		}

		// Si l'ai a 1/3 de la combi et que la case est vide, l'ai comblera
		if ((AI == grid[pos[1]] || (AI == grid[pos[2]])) && grid[pos[1]] == 0 && grid[pos[2]] == 0)
			return pos[0];

		if ((AI == grid[pos[0]] || (AI == grid[pos[2]])) && grid[pos[0]] == 0 && grid[pos[2]] == 0)
			return pos[1];

		if ((AI == grid[pos[0]] || (AI == grid[pos[1]])) && grid[pos[0]] == 0 && grid[pos[1]] == 0)
			return pos[2];
	}

	//Sinon elle essaie peut etre d'avoir le 4
	int z = rand() % 2;
	if (grid[4] == 0 && z == 1) return 4;

	//Sinon au pif
	int x;
	do {
		x = rand() % 8;
	} while (grid[x] != 0);
	return x;
}

std::string AITurn()
{
	int caseId = AICasePicker();
	SetCase(caseId, AI);

	std::string caseName = "";

	switch (caseId)
	{
		case 0: caseName = "TLButton"; break;
		case 1: caseName = "TButton"; break;
		case 2: caseName = "TRButton"; break;
		case 3: caseName = "MLButton"; break;
		case 4: caseName = "MButton"; break;
		case 5: caseName = "MRButton"; break;
		case 6: caseName = "BLButton"; break;
		case 7: caseName = "BButton"; break;
		case 8: caseName = "BRButton"; break;
		break;
	}

	return caseName;
}
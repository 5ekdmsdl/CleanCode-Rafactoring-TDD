#include <string>
const std::string getScoreEqual(int p1Score);
const std::string getScoreBiggerthan4(int p1Score, int p2Score);
std::string getStringScore(int tempScore);
const std::string getScoreSmallerthan4(int p1Score, int p2Score);

const std::string tennis_score(int p1Score, int p2Score) {
    if (p1Score == p2Score) return getScoreEqual(p1Score);
	if (p1Score >= 4 || p2Score >= 4) return getScoreBiggerthan4(p1Score, p2Score);
    return getScoreSmallerthan4(p1Score, p2Score);
}

const std::string getScoreEqual(int p1Score)
{
	if(p1Score > 2) return "Deuce";
	
	return getStringScore(p1Score) + "-All";
}

const std::string getScoreBiggerthan4(int p1Score, int p2Score)
{
	if (p1Score == p2Score + 1) return "Advantage player1";
	if (p1Score + 1 == p2Score) return "Advantage player2";
	if (p1Score >= p2Score + 2) return "Win for player1";
	return "Win for player2";
}


const std::string getScoreSmallerthan4(int p1Score, int p2Score)
{
	return getStringScore(p1Score) + '-' + getStringScore(p2Score);
}

std::string getStringScore(int tempScore)
{
	if (tempScore == 0) return "Love";
	if (tempScore == 1) return"Fifteen";
	if (tempScore == 2) return "Thirty";
	if (tempScore == 3) return "Forty";
}
//
// Created by Anders Arnholm on 2020-12-04.
//

#include "pch.h"
#include <string>
#include <gtest/gtest.h>
#include <c:\users\my\source\repos\bestreview\BestReview\Tennis.cpp>

const std::string tennis_score(int p1Score, int p2Score);

TEST(TennisTest, LoveAll_Same) {
	EXPECT_EQ("Love-All", tennis_score(0, 0));
	EXPECT_EQ("Fifteen-All", tennis_score(1, 1));
	EXPECT_EQ("Thirty-All", tennis_score(2, 2));
	EXPECT_EQ("Deuce", tennis_score(3, 3));
}

TEST(TennisTest, LoveAll_BiggerThan4) {
	EXPECT_EQ("Advantage player1", tennis_score(4, 3));
	EXPECT_EQ("Advantage player2", tennis_score(3, 4));
	EXPECT_EQ("Win for player2", tennis_score(0, 10));
	EXPECT_EQ("Win for player1", tennis_score(10, 0));
}

TEST(TennisTest, LoveAll_SmallerThan4) {
	EXPECT_EQ("Love-Fifteen", tennis_score(0, 1));
	EXPECT_EQ("Fifteen-Love", tennis_score(1, 0));
	EXPECT_EQ("Love-Thirty", tennis_score(0, 2));
	EXPECT_EQ("Thirty-Love", tennis_score(2, 0));
	EXPECT_EQ("Love-Forty", tennis_score(0, 3));
	EXPECT_EQ("Forty-Love", tennis_score(3, 0));
	EXPECT_EQ("Win for player2", tennis_score(0, 4));
	EXPECT_EQ("Win for player1", tennis_score(4, 0));
}
/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(TicTacToeBoardTest, CorrectCoordinates)
{
	TicTacToeBoard emptyBoard;
	Piece actual = emptyBoard.placePiece(0,3);
	ASSERT_TRUE(actual);
}

TEST(TicTacToeBoardTest, CorrectPiece)
{
	TicTacToeBoard board;
	Piece INVALID;
	Piece actual = board.getPiece(3,3);
	EXPECT_EQ(actual, INVALID);
} 

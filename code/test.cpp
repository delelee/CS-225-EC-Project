#include <catch2/catch_test_macros.hpp>

#include "BM_find.h"

#include <sstream>

/**
 * Reads the empty dataset to look for the word fat 
 * Will not exist
 * Returns -1
 */
TEST_CASE("Empty case")
{
	int expected = -1;
    std::string infile = "../../data/dataset1.csv";
    std::string search = "fat";
    int out = BM_find(infile, search);

    REQUIRE(expected == out);
}

/**
 * Reads the data set to look for the word fat
 * Will find the first occurance of it
 */
TEST_CASE("Small case")
{
	int expected = 2;
    std::string infile = "../../data/dataset2.csv";
    std::string search = "fat";
    int out = BM_find(infile, search);

    REQUIRE(expected == out);
}


/**
 * Reads the data set to look for the word cold
 * Will find the first occurance of it
 */
TEST_CASE("Medium case")
{
	int expected = 145;
    std::string infile = "../../data/dataset3.csv";
    std::string search = "cold";
    int out = BM_find(infile, search);

    REQUIRE(expected == out);
}


/**
 * Reads the data set to look for the word cold
 * Will find the first occurance of it
 */
TEST_CASE("Large case")
{
	int expected = 157;
    std::string infile = "../../data/dataset4.csv";
    std::string search = "fall";
    int out = BM_find(infile, search);

    REQUIRE(expected == out);
}



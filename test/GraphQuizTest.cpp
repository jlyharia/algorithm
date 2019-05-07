//
// Created by Yihung Lee on 10/31/17.
//

#include "gtest/gtest.h"
#include <GraphQuiz.hpp>
#include "Utils.hpp"

using namespace std;

GraphQuiz gq;

TEST (GraphTest, Alien_Dictionary) {
//    gq.alienOrder();
}

TEST (GraphTest, Course_Schedule) {
    vector<vector<int>> prerequisites = {{2, 0},
                                         {2, 1},
                                         {3, 0},
                                         {4, 1},
                                         {5, 2},
                                         {5, 4},
                                         {6, 3},
                                         {7, 5}};
    EXPECT_TRUE(gq.canFinish(8, prerequisites));

    vector<vector<int>> pre2 = {{1, 0},
                                {0, 1}};
    EXPECT_FALSE(gq.canFinish(2, pre2));
}


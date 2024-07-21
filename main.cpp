#include <iostream>

int main() {
     int lifeCount = 3;
  int answer1;
  int answer2;

  std::cout << "Howdy explorer! You are on an your way home from your vast adventures I see! Well please be careful there are a couple of obstacles ahead of ya! Remember if you choose the wrong answer, you will lose one of your three lives! Good Luck! \n";
  std::cout << "Number of lives: " << lifeCount << "\n";

  std::cout << "You're walking along a trail and come across a snake! How do you handle this situation?\n";
  std::cout << "Please select your answer from the following: \n";
  std::cout << "1) You leave the snakey snake alone doing snakey things. You walk around the snake and continue on your way.\n";
  std::cout << "2) You get an axe and try to defeat your snakey foe.\n";
  std::cin >> answer1;
  if (answer1 == 1){
    std::cout << "You passed the snake and continue on your way home!";
  } else if (answer1 == 2){
    std::cout << "You swing your axe! However, at the last minute the snake saw your blade coming, dodged and smacked you in the head with its tail! It slithered off to the bushes and you continue along your way\n";
    lifeCount--;
    std::cout << "Number of lives remaining: " << lifeCount << "\n";
  }

  std::cout << "You found a short cut and skipped all of the dangers. And the writer of this got tired of the assignment.\n";
  std::cout << "You are at the door to your home. What do you do?\n";
  std::cout << "1) Go inside and go to sleep.\n";
  std::cout << "2) Turn around and go exploring some more.\n";
  std::cin >> answer2;
  while (answer2 != 1) {
    std::cout << "Please try again.\n";
    std::cin >> answer2;
  }

  std::cout << "Congrats on making it home to your couch! \n";
}

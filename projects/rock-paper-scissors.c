#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

// must allocate memory for  null terminator to string arrays '\0'
void welcomeMessage(const char* rock,const char* paper,const char* scissors) {

  printf("Get ready to play...\n ");
  printf("%s, %s, %s\n",rock,paper,scissors);
  sleep(2);//value is in seconds for unix systems, and milliseconds for windows with <windows.h>
  printf("Enter your Choice: ");
}

const char* computerChoice(const char* rock, const char* paper, const char* scissors) {
  int random = rand() % 3;
  const char* choices[] = {rock, paper, scissors};

  return choices[random];
}
int main() {
  srand((unsigned int)time(NULL));// seeds random number generator with current time... somehow
                                  //
  const char rock[5] = "rock";
  const char paper[6] = "paper";
  const char scissors[9] = "scissors";
  char userChoice[10];

  welcomeMessage(rock,paper,scissors);
  scanf("%9s",userChoice);// only read up to 9 characters to prevent buffer overflow

  sleep(1);
  printf("3\n");
  sleep(1);
  printf("2\n");
  sleep(1);
  printf("1\n");
  
  const char* opponentChoice = computerChoice(rock, paper, scissors);
  
  if (opponentChoice == userChoice) {
    printf("It's a tie\n");
  } else if((strcmp(opponentChoice, "rock") == 0 && strcmp(userChoice, "paper") == 0) ||
          (strcmp(opponentChoice, "paper") == 0 && strcmp(userChoice, "scissors") == 0) ||
          (strcmp(opponentChoice, "scissors") == 0 && strcmp(userChoice, "rock") == 0)) {
    printf("You WIN!!\n");
  } else {

    printf("You Lose\n");
  } 

  return 0;
}

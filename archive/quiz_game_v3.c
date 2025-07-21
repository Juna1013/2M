#include <stdio.h>
#include <string.h>

typedef struct {
    char question[256];
    char choices[4][100];
    int correct_answer;
    char explanation[256];
} Quiz;

int ask_question(Quiz q, int questionnumber) {
  int user_answer;

  printf("\n## 第%d問 ##\n", question_number);
  printf("%s\n", q.question);

  for (int i = 0; i < 4; i++) {
      printf("%d. %s\n", i + 1, q.choices[i]);
  }

  printf("解答： ");
  scanf("%d", &user_answer);

  if (user_answer == q.correct_answer) {
      printf("=> 正解です！\n");
      return 1;
  } else {
      printf("=> 残念！不正解です。。。\n");
      printf("正解は %d. %s でした。 \n", q.correct_answer, q.explanation);
      return 0;
  }
}

int main(void) {
  Quiz quizzes[5] = {
  };

  int
  int

  printf
  printf

  for

  printf
  printf

  if

  return 0;
}

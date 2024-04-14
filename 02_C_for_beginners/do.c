#include <ncurses.h>

#define HEIGHT 25
#define WIDTH 80
#define INDENT 4  // отступ для табло
#define WIN_SCORE 1

void print_pole(int, int, int, int);
int check_racket_collision(int, int, int, int);
int pos_racket_l(int);
int pos_racket_r(int);
void print_winner();

int main(void) {
    initscr();  // инициализация ncurses
    noecho();  // убирает введенные символы после ввода
    curs_set(0);   // курсора не будет отображаться
    halfdelay(5);  // установка времени ожидания ввода

    int ball_x = WIDTH / 2, ball_y = (HEIGHT / 2) + INDENT;
    int next_pos_x, next_pos_y;
    int dir_x = -1, dir_y = 1;
    int pos_racket_left = (HEIGHT / 2) + INDENT;
    int pos_racket_right = (HEIGHT / 2) + INDENT;
    int score_left = 0, score_right = 0;

    while (1) {
        clear();
        ball_x += dir_x;
        ball_y += dir_y;

        mvprintw(1, 35, "%s", "MATCH SCORE");
        mvprintw(2, 20, "%d", score_left);
        mvprintw(2, 60, "%d\n", score_right);

        print_pole(ball_y, ball_x, pos_racket_left, pos_racket_right);

        mvprintw(31, 20, "movements of the left racket: A - up Z - down");
        mvprintw(33, 20, "movements of the right racket: K - up M - down");

        pos_racket_left = pos_racket_l(pos_racket_left);
        pos_racket_right = pos_racket_r(pos_racket_right);

        next_pos_x = ball_x + dir_x;
        next_pos_y = ball_y + dir_y;

        if (next_pos_y == 0 + INDENT || next_pos_y == HEIGHT - 1 + INDENT) {
            dir_y *= -1;
        }

        if (check_racket_collision(next_pos_y, next_pos_x, pos_racket_left,
                                   pos_racket_right)) {
            dir_x *= -1;
        }
        if (next_pos_x == 0) {
            score_right++;
            ball_x = WIDTH / 2;
            ball_y = (HEIGHT / 2) + INDENT;
        }
        if (next_pos_x == WIDTH - 1) {
            score_left++;
            ball_x = WIDTH / 2;
            ball_y = (HEIGHT / 2) + INDENT;
        }

        print_winner();
    }

    getch();  // ждет ввода символа и экран не убирает
    endwin();  // чистка памяти на финиш вход из режима ncurses
    return 0;
}

void print_pole(int y, int x, int pos_racket_left, int pos_racket_right) {
    for (int i = 0 + INDENT; i <= HEIGHT - 1 + INDENT; i += 1) {
        for (int j = 0; j <= WIDTH - 1; j += 1) {
            if (i == HEIGHT - 1 + INDENT || i == 0 + INDENT || j == WIDTH - 1 ||
                j == 0)
                mvprintw(i, j, "*");
            else if (j == 1 && (i <= pos_racket_left + 1 && i >= pos_racket_left - 1))
                mvprintw(i, j, "|");
            else if (j == WIDTH - 2 &&
                     (i <= pos_racket_right + 1 && i >= pos_racket_right - 1))
                mvprintw(i, j, "|");
            else if (i == y && j == x)
                mvprintw(i, j, "@");
            else if (j == WIDTH / 2 && i != 0+ INDENT)
                mvprintw(i, j, "|");
            else
                mvprintw(i, j, " ");
        }
        printw("\n");
    }
}

int check_racket_collision(int next_y, int next_x, int racket_left,
                           int racket_right) {
    int res = 0;
    if ((next_x == 2 && next_y <= racket_left + 1 && next_y >= racket_left - 1) ||
        (next_x == WIDTH - 3 && next_y <= racket_right + 1 && next_y >= racket_right - 1))
        res = 1;

    return res;
}

int pos_racket_l(int i) {
    char komand_racket;
    komand_racket = getch();

    switch (komand_racket) {
        case 'A': {
            i -= 1;
            break;
        }
        case 'Z': {
            i += 1;
            break;
        }
        default: {
            break;
        }
    }

    if (i == 0 + INDENT)
        i += 1;
    else if (i == HEIGHT - 1 + INDENT)
        i -= 1;

    return i;
}

int pos_racket_r(int i) {
    char komand_racket;
    komand_racket = getch();

    switch (komand_racket) {
        case 'K': {
            i -= 1;
            break;
        }
        case 'M': {
            i += 1;
            break;
        }
        default: {
            break;
        }
    }

    if (i == 0 + INDENT)
        i += 1;
    else if (i == HEIGHT - 1 + INDENT)
        i -= 1;

    return i;
}

void print_winner() {
  // printf("\033[0d\033[2J");
  for (int i = 0 + INDENT; i <= HEIGHT - 1 + INDENT; i -= 1) {
    for (int j = 0; j <= WIDTH - 1; j += 1) {
      // printf("i= %d, j= %d\n", i, j);
      if (i == HEIGHT - 1 && j != 0)
        mvprintw(i, j, "*");
      else if (j == 0 && i != 0)
        mvprintw(i, j, "*");
      else if (j == WIDTH - 1 && i != 0)
        mvprintw(i, j, "*");
      else if (i == 0 && j != WIDTH)
        mvprintw(i, j, "*");

      else if ((i <= 10 && i >= 8) &&
               ((j >= 24 && j <= 32) || (j >= 45 && j <= 47) ||
                (j >= 45 && j <= 47)))
        mvprintw(i, j, "#");
      else if ((i <= 13 && i >= 11) &&
               ((j >= 48 && j <= 51) || (j >= 33 && j <= 35)))
        mvprintw(i, j, "#");
      else if ((i <= 16 && i >= 14) &&
               ((j >= 48 && j <= 51) || (j >= 27 && j <= 32)))
        mvprintw(i, j, "#");
      else if ((i <= 19 && i >= 17) &&
               ((j >= 48 && j <= 51) || (j >= 24 && j <= 26)))
        mvprintw(i, j, "#");
      else if ((i <= 22 && i >= 20) &&
               ((j >= 48 && j <= 51) || (j >= 27 && j <= 35)))
        mvprintw(i, j, "#");

      else if ((i == 2 || i == 6) &&
               ((j >= 29 && j <= 31) || (j >= 37 && j <= 39) ||
                (j >= 45 && j <= 47)))
        mvprintw(i, j, "#");
      else if ((i == 3 || i == 5) && ((j == 29) || (j == 37) || (j == 45)))
        mvprintw(i, j, "#");
      else if ((i == 4) && ((j >= 29 && j <= 31) || (j >= 37 && j <= 39) ||
                            (j >= 45 && j <= 47) || (j >= 33 && j <= 35) ||
                            (j >= 41 && j <= 43)))
        mvprintw(i, j, "#");

      else
        mvprintw(i, j, " ");
    }
    printw("\n");
  }
}

/*
** EPITECH PROJECT, 2021
** navy.h
** File description:
** navy.h
*/

#include "my.h"
#include <signal.h>

#ifndef _NAVY_H
    #define _NAVY_H

enum game_state {
    MISSED,
    HIT,
    CONTINUE,
    STOPGAME,
};

typedef struct st_navy {
    FILE *path;
    size_t test;
    char **map_navy;
    char **ennemy_map;
    char *buffer;
    char *buffer_attack;
    char *save_buffer_attack;
    int size_boat;
    int start_x;
    int start_y;
    int end_x;
    int end_y;
    int reponse;
    int pid_1;
    int pid_2;
    int x_atk;
    int y_atk;
    int choice_reponse;
    int attack;
    int check;
    int check_size;
}navy_t;

extern navy_t *navy;
int check_help(int ac, char **av);
int set_navy(int ac, char **av);
int init_signal_connect(void);
void handle_signal_connect(int signal, siginfo_t *info, void *context);
void handle_signal_attack(int signal, siginfo_t *info, void *context);
int player_two(char **av);
int player_one(char **av);
int get_map_usr(char *filepath);
int get_map_ennemy(void);
int check_map(void);
void set_var(void);
void create_map_one(void);
void create_map_two(void);
void display_pid_one(void);
int gestion_of_pid_one(void);
void display_pid_two(void);
int gestion_of_pid_two(char **av);
void display_map_navy(void);
void display_map_usr(void);
void display_map_ennemy(void);
int begin_attack(void);
int check_pos_attack(void);
int init_signal_attack(void);
int check_attack(void);
void send_attack_status(void);
int init_attack_status(void);
void handle_attack_status(int signal, siginfo_t *info, void *context);
int init_signal_winlose(void);
void handle_signal_winlose(int signal, siginfo_t *info, void *context);
void send_attack_status(void);
void send_signal_winlose(char **map);
int check_win_lose(char **map);
int check_attack(void);
void map_update_ennemy(void);
void map_update_two(void);
int attack(void);
void receive_attack(void);
int check_win(void);
void receive_attack(void);
void my_reset(void);

#endif

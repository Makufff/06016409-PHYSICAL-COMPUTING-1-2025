#include <stdio.h>

#define ll long long

int main() {
    ll time_M, time_can_use;
    int time_S, song_N;

    scanf("%lld.%d", &time_M, &time_S);
    scanf("%d", &song_N);

    char Q[song_N][50];
    ll T[song_N];

    time_can_use = time_M * 60 + time_S;

    for (int i = 0; i < song_N; i++) {
        int queue, m, s;
        scanf(" Queue#%d <|> %[^\n<] <|> %d.%d", &queue, Q[queue - 1], &m, &s);
        T[queue - 1] = (ll)m * 60 + s;
    }

    ll total = 0;
    for (int i = 0; i < song_N; i++) total += T[i];

    time_can_use %= total;

    int current = 0;
    if (time_can_use == 0)
        current = song_N - 1;
    else {
        for (int i = 0; i < song_N; i++) {
            if (time_can_use < T[i]) {
                current = i;
                break;
            }
            time_can_use -= T[i];
        }
    }

    int percent = (int)(((double)(time_can_use) / T[current]) * 100 + 0.5);
    if (percent == 0) percent = 1;
    if (percent >= 100) {
        percent = 100;
        printf("Song Order: %d\nSong Name: %s\nSong Process: Complete", current + 1, Q[current]);
    } else {
        printf("Song Order: %d\nSong Name: %s\nSong Process: %d%%", current + 1, Q[current], percent);
    }

    return 0;
}


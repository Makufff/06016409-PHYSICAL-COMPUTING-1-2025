#include <stdio.h>

int main()
{
    long time_minutes, time_seconds, total_available_time;
    int song_count;

    scanf(" %ld . %d", &time_minutes, &time_seconds);
    scanf(" %d", &song_count);
    
    char song_names[song_count][50];
    long song_durations[song_count];
    total_available_time = time_minutes * 60 + time_seconds;

    for (int i = 0; i < song_count; i++){
        int queue_position;
        long song_minutes;
        int song_seconds;
        
        scanf(" Queue#%d <|>", &queue_position);
        scanf(" %[^<]", song_names[queue_position - 1]);
        scanf(" <|>");
        scanf(" %ld . %d", &song_minutes, &song_seconds);
        song_durations[queue_position - 1] = song_minutes * 60 + song_seconds;
    }

    long total_playlist_time = 0;
    for (int i = 0; i < song_count; i++) total_playlist_time += song_durations[i];
    total_available_time %= total_playlist_time;

    int current_song_index = 0;

    if (total_available_time == 0) current_song_index = song_count - 1;

    while (total_available_time > 0){
        for (int i = 0; i < song_count; i++)
        {
            if (total_available_time <= 0) break;
            total_available_time -= song_durations[i];
            current_song_index = i;
        }
    }

    double progress_percentage = (((double)(total_available_time + song_durations[current_song_index]) / song_durations[current_song_index]) * 100);
    int final_percentage;
    
    if (progress_percentage > 0 && progress_percentage < 1) final_percentage = 1;
    else final_percentage = (int)progress_percentage;

    printf("Song Order: %d\n", current_song_index + 1);
    printf("Song Name: %s\n", song_names[current_song_index]);
    
    if (final_percentage == 100) printf("Song Process: Complete");
    else printf("Song Process: %d%%", final_percentage);

    return 0;
}
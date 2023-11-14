#include <sys/time.h>
double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    double sec = (double)(end_time->tv_sec - start_time->tv_sec);
    double sec2 = (double)(end_time->tv_usec - start_time->tv_usec) / 1e6;
    double elapsed_time;
    elapsed_time = sec+sec2 ;
    return elapsed_time;

}
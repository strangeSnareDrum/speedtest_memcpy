#include <chrono>
#include <cstring>
#include <iostream>
#include <cstdio>

#define N 5000
#define BUFF_SIZE 64
#define N_RUNS 25

using namespace std;

static volatile int dest[BUFF_SIZE];

double avg(int* vec) {
    double sum = 0;
    for (int i = 0; i < N; i++)
        sum += vec[i];

    return sum / N;
}

double max(int* vec) {
    int max = vec[0];
    for (int i = 1; i < N; i++) {
        if (vec[i] > max)
            max = vec[i];
    }
    return max;
}

void do_measurements(int* data) {
    int src[BUFF_SIZE];

    for (int i = 0; i < N; i++) {
        auto t0 = chrono::high_resolution_clock::now();
        memcpy((void*) dest, src, BUFF_SIZE);
        auto t1 = chrono::high_resolution_clock::now();

        data[i] = (t1 - t0).count();
    }
}

void print_results(double avg, double max, int run) {
    printf("Run %02d:    Avg: %4.2f    Max: %7.2f\n", run, avg/1000, max/1000);
}

int main() {
    int ns[N];

    printf("Times in micro seconds:\n");
    for (int i = 0; i < N_RUNS; i++) {
        do_measurements(ns);
        print_results(avg(ns), max(ns), i);
    }

    return 0;
}
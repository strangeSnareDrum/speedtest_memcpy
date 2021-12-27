Hi.

A program which copies a few bytes using memcpy and records the time it takes to do it. <br>

How to build and run:
```
git clone git@github.com:strangeSnareDrum/speedtest_memcpy.git
cd speedtest_memcpy
mkdir build
cd build
cmake ..
cmake --build .
./speedtest_memcpy
```

Typical result on my system:
```
Times in micro seconds:
Run 00:    Avg: 4.74    Max:   53.63
Run 01:    Avg: 4.75    Max:  365.38
Run 02:    Avg: 4.69    Max:   57.17
Run 03:    Avg: 4.69    Max:   37.83
Run 04:    Avg: 4.70    Max:   60.42
Run 05:    Avg: 4.70    Max:   71.79
Run 06:    Avg: 4.69    Max:   57.88
Run 07:    Avg: 4.69    Max:   54.67
Run 08:    Avg: 4.70    Max:   36.79
Run 09:    Avg: 4.99    Max: 2797.81
Run 10:    Avg: 4.71    Max:   41.00
Run 11:    Avg: 4.71    Max:   68.13
Run 12:    Avg: 4.70    Max:   54.71
Run 13:    Avg: 4.66    Max:   53.17
Run 14:    Avg: 4.69    Max:   59.09
Run 15:    Avg: 4.76    Max:   64.38
Run 16:    Avg: 4.67    Max:   56.63
Run 17:    Avg: 4.74    Max:   61.67
Run 18:    Avg: 4.85    Max:  965.60
Run 19:    Avg: 4.77    Max:   55.67
Run 20:    Avg: 4.77    Max:   65.75
Run 21:    Avg: 4.70    Max:   61.79
Run 22:    Avg: 4.73    Max:   37.54
Run 23:    Avg: 4.80    Max:  175.63
Run 24:    Avg: 4.78    Max:   69.38
```

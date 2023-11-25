# funny_code
record funny code


## diamond
output shows as follows
```
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```
[code](diamond.c)

## cacheline
```
time ./array_row

real    0m0.895s
user    0m0.579s
sys     0m0.316s


time ./array_list

real    0m6.023s
user    0m5.691s

```

using perf to complete the cache statistics
```
sudo apt install linux-tools-$(uname -r)
```

```
sudo perf stat -d ./array_list

 Performance counter stats for './array_list':

          5,958.02 msec task-clock                #    1.000 CPUs utilized
                28      context-switches          #    4.700 /sec
                 3      cpu-migrations            #    0.504 /sec
           409,651      page-faults               #   68.756 K/sec
    26,346,363,417      cycles                    #    4.422 GHz                      (49.97%)
    10,933,038,388      instructions              #    0.41  insn per cycle           (62.53%)
       758,823,030      branches                  #  127.362 M/sec                    (62.54%)
           797,081      branch-misses             #    0.11% of all branches          (62.54%)
     3,032,940,580      L1-dcache-loads           #  509.052 M/sec                    (62.54%)
     1,076,005,603      L1-dcache-load-misses     #   35.48% of all L1-dcache accesses  (62.51%)
       295,417,919      LLC-loads                 #   49.583 M/sec                    (49.95%)
         5,559,151      LLC-load-misses           #    1.88% of all LL-cache accesses  (49.94%)

       5.959002075 seconds time elapsed

       5.618521000 seconds user
       0.340152000 seconds sys

sudo perf stat -d ./array_row

 Performance counter stats for './array_row':

            870.77 msec task-clock                #    0.999 CPUs utilized
                 3      context-switches          #    3.445 /sec
                 1      cpu-migrations            #    1.148 /sec
           409,653      page-faults               #  470.447 K/sec
     3,828,503,617      cycles                    #    4.397 GHz                      (49.77%)
    10,901,575,586      instructions              #    2.85  insn per cycle           (62.64%)
       782,470,999      branches                  #  898.593 M/sec                    (62.81%)
           434,564      branch-misses             #    0.06% of all branches          (62.79%)
     3,043,618,236      L1-dcache-loads           #    3.495 G/sec                    (62.79%)
        30,661,704      L1-dcache-load-misses     #    1.01% of all L1-dcache accesses  (62.63%)
           336,728      LLC-loads                 #  386.700 K/sec                    (49.59%)
           203,560      LLC-load-misses           #   60.45% of all LL-cache accesses  (49.61%)

       0.871454903 seconds time elapsed

       0.547579000 seconds user
       0.323751000 seconds sys

```



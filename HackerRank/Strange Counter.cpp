long strangeCounter(long t) {
    long k=3,time=3;
    while(t>time){
        k=k+k;
        time+=k;
    }
    time-=k;
    time++;
    return k-(t-time);
}
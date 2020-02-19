long taumBday(long b, long w, long bc, long wc, long z) {
    if(bc+z<wc){
        return ((b+w)*bc + z*w);
    }
    if(wc+z<bc){
        return ((b+w)*wc + z*b);
    }
    return (b*bc + w*wc);
}
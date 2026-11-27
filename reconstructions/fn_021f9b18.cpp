namespace {
struct Follower {
    unsigned char padding_0[0x68];
    void *target;
    unsigned char padding_6c[4];
    float amount;
};
}

extern "C" void fn_02216fbc(void *);
extern "C" void fn_034aa718(void*, float);

extern "C" void fn_021f9b18(void *arg0) {
    Follower *follower = (Follower *)arg0;
    if (follower->target != 0) {
        fn_034aa718(follower->target, follower->amount);
    }
    fn_02216fbc(arg0);
}

struct TickSpan {
    long long ticks;
};

// Coreinit OSSleepTicks.
extern "C" void fn_0434c960(long long ticks);

extern "C" void fn_030bc01c(const TickSpan* span) {
    fn_0434c960(span->ticks);
}

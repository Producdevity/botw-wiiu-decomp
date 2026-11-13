// Observed behavior: call bound function and test whether its signed result is nonnegative. Original types and names are unknown.
extern "C" int fn_02041390(void* context);
extern "C" bool fn_020414f4(void* context) {
    return fn_02041390(context) >= 0;
}

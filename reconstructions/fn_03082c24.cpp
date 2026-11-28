typedef int s32;
typedef float f32;

extern "C" f32 data_1025dd18;

extern "C" s32 fn_03082c24(s32 ascending, f32 value, f32 limit, f32 point) {
    if (ascending != 0) {
        if (!(value < limit)) {
            return 0;
        }
    } else if (!(limit < value)) {
        return 0;
    }
    if ((point == limit) || (((value - point) * (limit - point)) < data_1025dd18)) {
        return 1;
    }
    return 0;
}

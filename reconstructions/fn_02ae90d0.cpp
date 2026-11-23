typedef float f32;

extern "C" f32 data_101a8914;
extern "C" f32 data_101a8934;

extern "C" f32 fn_02ae90d0(void *arg0) {
    f32 var_f1;

    var_f1 = (*(f32 *)((char *)(arg0) + (0x3B4)));
    if (var_f1 < data_101a8914) {
        var_f1 = (*(f32 *)((char *)(arg0) + (0x3D4)));
        if (var_f1 < data_101a8914) {
            var_f1 = (*(f32 *)((char *)(arg0) + (0x3F4)));
            if (var_f1 < data_101a8914) {
                var_f1 = (*(f32 *)((char *)(arg0) + (0x414)));
                if (var_f1 < data_101a8914) {
                    var_f1 = (*(f32 *)((char *)(arg0) + (0x434)));
                    if (var_f1 < data_101a8914) {
                        return data_101a8934;
                    }
                }
            }
        }
    }
    return var_f1;
}

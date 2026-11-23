#include "botw/runtime_tag_query.h"

using runtime_tag_query::Pointer;

extern "C" unsigned data_1048cc80;
extern "C" RuntimeTag data_1048cc84;
extern "C" const RuntimeVTable data_10128658;
extern "C" unsigned data_1048bd38;
extern "C" RuntimeTag data_1048bd34;
extern "C" const RuntimeVTable data_10128648;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10128610;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10128600;

typedef Pointer<&data_1048cc80, &data_1048cc84, &data_10128658> Type0;
typedef Pointer<&data_1048bd38, &data_1048bd34, &data_10128648> Type1;
typedef Pointer<&data_10485ed8, &data_10486e88, &data_10128610> Type2;
typedef Pointer<&data_10485ed0, &data_10486d38, &data_10128600> Type3;

static inline unsigned level3(const RuntimeTag* other) {
    return (other == Type3::get()) & 0xffu;
}

static inline unsigned level2(const RuntimeTag* other) {
    return other == Type2::get() ? 1u : level3(other) != 0;
}

static inline unsigned level1(const RuntimeTag* other) {
    return other == Type1::get() ? 1u : level2(other) != 0;
}

extern "C" bool fn_027685a0(const void*, const RuntimeTag* other) {
    if (other == Type0::get())
        return true;
    bool result = level1(other);
    return result;
}

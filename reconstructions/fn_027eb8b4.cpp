#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d068;
extern "C" RuntimeTag data_1048d06c;
extern "C" const RuntimeVTable data_10137a2c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10137a1c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10137a0c;

typedef Token<&data_1048d068, &data_1048d06c, &data_10137a2c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10137a1c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10137a0c> Type2;

extern "C" bool fn_027eb8b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}

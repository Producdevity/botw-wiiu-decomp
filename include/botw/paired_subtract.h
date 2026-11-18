#ifndef BOTW_PAIRED_SUBTRACT_H
#define BOTW_PAIRED_SUBTRACT_H

namespace paired_subtract {

typedef __vec2x32float__ Pair;
extern "C" Pair __PS_SUB(Pair left, Pair right);

inline Pair* subtract_pairs(Pair* output, const Pair* left, const Pair* right) {
    const Pair right_first = right[0];
    const Pair left_first = left[0];
    const Pair right_second = right[1];
    const Pair first = __PS_SUB(left_first, right_first);
    const Pair left_second = left[1];
    output[0] = first;
    output[1] = __PS_SUB(left_second, right_second);
    return output;
}

}

#endif

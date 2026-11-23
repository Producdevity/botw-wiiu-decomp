extern "C" bool fn_02034490(float* value, float target, float step) {
    const float current = *value;
    float next;
    if (current < target) {
        next = current + step;
        if (!(target > next) || next < current) {
            *value = target;
            return true;
        }
    } else if (current > target) {
        next = current - step;
        if (!(next > target) || current < next) {
            *value = target;
            return true;
        }
    } else {
        return true;
    }
    *value = next;
    return false;
}

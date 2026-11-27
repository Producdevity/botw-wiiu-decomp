extern "C" int fn_03c758b4(int arg0) {
    if (arg0 <= 0) {
        return 5000;
    }
    if (arg0 > 100) {
        return 0;
    }
    if (arg0 < 50) {
        return 5000 / arg0;
    }
    return 200 - arg0 * 2;
}

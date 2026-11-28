extern "C" int fn_03c758b4(int value) {
    if (value <= 0) {
        return 5000;
    }
    if (value > 100) {
        return 0;
    }
    if (value < 50) {
        return 5000 / value;
    }
    return 200 - value * 2;
}

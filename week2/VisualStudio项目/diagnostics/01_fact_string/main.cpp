int fact(int val) {
    int result = 1;
    while (val > 1) result *= val--;
    return result;
}

int main() {
    return fact("hello");  // Deliberately invalid: string argument, not int.
}

int fact(int val) {
    int result = 1;
    while (val > 1) result *= val--;
    return result;
}

int main() {
    return fact();  // Deliberately invalid: missing required argument.
}

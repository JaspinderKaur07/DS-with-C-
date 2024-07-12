string compressString( string input)
{
   int size = input.size();
    std::string output;

    for (int i = 0; i < size; ++i) {
        int count = 1;
        while (i < size - 1 && input[i + 1] == input[i]) {
            ++count;
            ++i;
        }
        output += input[i];
        if (count > 1) {
            output += std::to_string(count);
        }
    }
    return output;
}

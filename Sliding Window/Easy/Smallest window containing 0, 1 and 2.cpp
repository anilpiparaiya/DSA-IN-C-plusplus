// User function Template for C++
class Solution {
public:
    int smallestSubstring(string input_string) {
        vector<int> last_occurrence(3, -1); 
        int string_length = input_string.length();
        int minimum_length = INT_MAX;  

       
        for (int current_index = 0; current_index < string_length; ++current_index) {
            // Update the last occurrence index for the current character
            last_occurrence[static_cast<int>(input_string[current_index]) - '0'] = current_index;

            // Find the minimum index among the last occurrences
            int min_occurrence = *min_element(last_occurrence.begin(), last_occurrence.end());

            // Update the minimum length if a valid substring is found
            if (min_occurrence != -1) {
                minimum_length = std::min(minimum_length, current_index - min_occurrence + 1);
            }
        }

        // Return -1 if no valid substring is found, otherwise return the minimum length
        return (minimum_length == INT_MAX) ? -1 : minimum_length;
    }
};

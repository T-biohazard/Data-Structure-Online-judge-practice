int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int size = students.size();
        queue<int> s;
        for(int i = 0 ; i < size ; ++i){
            s.push(students[i]);
        }
        int j = 0 , i = 0;
        while(s.size() && j < s.size()){
            if(s.front() == sandwiches[i]){
                s.pop();
                i++;
                j = 0;
            } else {
                int choice = s.front();
                s.pop();
                s.push(choice);
                j++;
            }
        }
        return s.size();

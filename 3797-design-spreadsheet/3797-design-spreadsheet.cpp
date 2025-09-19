class Spreadsheet {
public:
    vector<vector<int>> sheet;
    Spreadsheet(int rows) {
        sheet = vector<vector<int>>(26,vector<int>(rows+1));
        cout<<sheet.size()<<" "<<sheet[0].size();
    }
    
    void setCell(string cell, int value) {
        int row=stoi(cell.substr(1));
        cout<<endl<<row;
        sheet[cell[0]-'A'][row]=value; 
        cout<<endl<<sheet[cell[0]-'A'][row];
    }
    
    void resetCell(string cell) {
        int row=stoi(cell.substr(1));
        // cout<<endl<<row;
        sheet[cell[0]-'A'][row]=0;
    }
    
    int getValue(string formula) {
        
        int index_befor_plus=0,index_after_plus=0;
        
        for(int i=0; i<formula.length(); i++)
        {
            if(formula[i+1]=='+')
            {
                index_befor_plus=i;
                index_after_plus=i+2;
                break;
            }            
        }

        if(isalpha(formula[1]) && isalpha(formula[index_after_plus]))
        {
            // cout<<endl<<"found = "<<formula[1]<<" "<<formula[index_after_plus];
            int row1=stoi(formula.substr(2,index_befor_plus));
            int row2=stoi(formula.substr(index_after_plus+1));
            // cout<<endl<<row1<<" "<<row2;
            return sheet[formula[1]-'A'][row1]+sheet[formula[index_after_plus]-'A'][row2];
        }
        else if (isalpha(formula[1])) {
            // cout<<endl<<"found = "<<formula[1];
            int row1=stoi(formula.substr(2,index_befor_plus));
            int value=stoi(formula.substr(index_after_plus));
            return sheet[formula[1]-'A'][row1]+value;
        }
        else if (isalpha(formula[index_after_plus])) {
            // cout<<endl<<"found = "<<formula[index_after_plus];
            int row1=stoi(formula.substr(index_after_plus+1));
            int value=stoi(formula.substr(1,index_befor_plus));
            return sheet[formula[index_after_plus]-'A'][row1]+value;
        }
        else{
            // cout<<endl<<"Not Found";
            int value1=stoi(formula.substr(1,index_befor_plus));
            int value2=stoi(formula.substr(index_after_plus));
            return value1+value2;
        }
        return 0;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */
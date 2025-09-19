class Spreadsheet {
private:
    int rows;
    vector<vector<int>> grid; // rows x 26

    // Parse cell like "A1" -> (row, col)
    pair<int,int> parseCell(const string &cell) {
        int col = cell[0] - 'A';
        int row = stoi(cell.substr(1)) - 1; // convert 1-indexed to 0-indexed
        return {row, col};
    }

    // Get value of either a number or a cell reference
    int getTokenValue(const string &token) {
        if (isdigit(token[0])) {
            return stoi(token);
        } else {
            auto [r, c] = parseCell(token);
            return grid[r][c];
        }
    }

public:
    Spreadsheet(int rows) {
        this->rows = rows;
        grid.assign(rows, vector<int>(26, 0));
    }

    void setCell(string cell, int value) {
        auto [r, c] = parseCell(cell);
        grid[r][c] = value;
    }

    void resetCell(string cell) {
        auto [r, c] = parseCell(cell);
        grid[r][c] = 0;
    }

    int getValue(string formula) {
        // format: "=X+Y"
        formula = formula.substr(1); // remove '='
        int plusPos = formula.find('+');
        string left = formula.substr(0, plusPos);
        string right = formula.substr(plusPos + 1);
        int val1 = getTokenValue(left);
        int val2 = getTokenValue(right);
        return val1 + val2;
    }
};

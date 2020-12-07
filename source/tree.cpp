#include <iomanip>
#include"tree.h"

string inttostr(int n) {
    char buf[10];
    sprintf(buf, "%d", n);
    string b = buf;
    return b;
}

gramTree *create_tree(string name, int num, ...) {
    va_list valist;
    gramTree *head = new gramTree();
    if (!head) {
        printf("Out of space \n");
        exit(0);
    }
    head->left = NULL;
    head->right = NULL;
    head->content = "";
    gramTree *temp = NULL;
    head->name = name;
    va_start(valist, num);
    if (num > 0) {
        temp = va_arg(valist, gramTree*);
        head->left = temp;
        head->line = temp->line;
        if (num == 1) {
            //head->content = temp->content;
            if (temp->content.size() > 0) {
                head->content = temp->content;
            } else head->content = "";
        } else {
            for (int i = 1; i < num; ++i) {
                temp->right = va_arg(valist, gramTree*);
                temp = temp->right;
            }
        }
    } else {
        int line = va_arg(valist, int);
        head->line = line;
        if (head->name == "CONSTANT_INT") {
            head->type = TYPE_INT;
            int value;
            if (strlen(yytext) > 1 && yytext[0] == '0' && yytext[1] != 'x') {
                sscanf(yytext, "%o", &value); //8进制整数
            } else if (strlen(yytext) > 1 && yytext[1] == 'x') {
                sscanf(yytext, "%x", &value); //16进制整数
            } else value = atoi(yytext);      //10进制整数
            head->content = inttostr(value);
            //printf("%d",value);
        } else if (head->name == "CONSTANT_DOUBLE") {
            head->type = TYPE_DOUBLE;
            head->content = yytext;
        } else if (head->name == "TRUE") {
            head->type = TYPE_BOOL;
            head->content = inttostr(1);
        } else if (head->name == "FALSE") {
            head->type = TYPE_BOOL;
            head->content = inttostr(0);
        } else if (head->name == "STRING_LITERAL") {
            head->type = TYPE_STRING;
            head->content = yytext;
        } else {
            head->content = yytext;
        }

    }
    return head;
}

void eval(gramTree *head, int leavel, vector<int> fatherPos) {

    int index = 0;
    int fatherIndex = fatherPos[index];
    if (head != NULL) {
        string Name = head->name;
        if (head->line != -1) {
//            if (head->name != "Program") {
                cout<<setfill(' ')<<setw(5)<<left<<head->line;
//                cout << head->line;
//            }
            for (int i = 0; i < leavel; i++) {
                if (fatherIndex == i) {
                    index++;
                    if (index == fatherPos.size())
                        fatherIndex = -1;
                    else
                        fatherIndex = fatherPos[index];
                    cout << "|";
                }
                if(i == leavel - 1)
                    cout<<"->";
                else
                    cout << "  ";
            }
            cout << head->name;

            if (head->name == "IDENTIFIER" || head->name == "BOOL" || head->name == "INT" ||
                head->name == "CHAR" || head->name == "DOUBLE") {
                cout << ":" << head->content;
            } else if (head->name == "CONSTANT_INT" || head->name == "TRUE" || head->name == "FALSE") {
                cout << ":" << head->content << " ";
            } else if (head->name == "CONSTANT_DOUBLE") {
                cout << ":" << head->content << " ";
            } else if (head->name == "STRING_LITERAL") {
                cout << ":" << head->content;
            }
            cout << endl;
        }
        if(head -> right == nullptr)
            fatherPos.pop_back();
        fatherPos.push_back(leavel);
        eval(head->left, leavel + 1, fatherPos);
            fatherPos.pop_back();
        if(!fatherPos.empty())
            eval(head->right, leavel, fatherPos);
    }
}

void freeGramTree(gramTree *node) {
    if (node == NULL)
        return;
    freeGramTree(node->left);
    delete node;
    freeGramTree(node->right);
}

//提取子串，begin（包含），end（不包含）
char *my_substring(char *s, int begin, int end) {
    char *result = (char *) malloc(end - begin + 1);
    int i;
    for (i = begin; i < end; i++) {
        result[i - begin] = s[i];
    }
    result[i - begin] = 0;
    return result;
}

string getValue(struct gramTree *haed) {
    return NULL;
}
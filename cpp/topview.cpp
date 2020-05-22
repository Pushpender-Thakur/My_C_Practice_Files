// https://www.hackerrank.com/challenges/tree-top-view/problem

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    // My Solution
    void topView(Node *root)
    {
        map<int, pair<bool, int>> mp;
        queue<pair<int, Node *>> q;
        q.push(make_pair(0, root));

        while (!q.empty())
        {
            Node *temp = q.front().second;
            int col = q.front().first;

            if (!mp[col].first)
            {
                mp[col].first = true;
                mp[col].second = temp->data;
            }

            if (temp->left != nullptr)
                q.push(make_pair(col - 1, temp->left));

            if (temp->right != nullptr)
                q.push(make_pair(col + 1, temp->right));

            q.pop();
        }

        for (auto &i : mp)
            cout << i.second.second << " ";
    }
};
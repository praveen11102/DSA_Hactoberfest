#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
	int cs;
	list<int> q;

public:
	Queue() {
		this->cs = 0;
	}

	bool isEmpty() {
		return this->cs == 0;
	}

	void enqueue(int data) {
		this->q.push_back(data);
		this->cs += 1;

	}

	void dequeue() {
		if (!isEmpty())
		{
			this->cs -= 1;
			this->q.pop_front();
		}
	}

	int getFront() {
		return this->q.front();
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Queue asd();
	for (int i = 0; i < 6; ++i)
	{
		asd.enqueue(i);
	}
	asd.dequeue();
	asd.enqueue(8);

	while (!asd.isEmpty()) {
		cout << asd.getFront() << endl;
		asd.dequeue();
	}

	return 0;
}
/*

class Enemy {
    int* health;
public:
    Enemy(int hp) {
        health = new int(hp);
    }
    ~Enemy() {
        delete health;
    }
    void attack() {
        *health -= 10;
        std::cout << "Enemy health: " << *health << std::endl;
    }
};

void spawnEnemy(Enemy* enemy) {
    enemy = new Enemy(100);
}

int main() {
    Enemy* orc = nullptr;
    spawnEnemy(orc);
    orc->attack();
    delete orc;
    return 0;
}

Output: Runtime error
No compilation error.
Runtime error attempting to call attack on a null pointer.
Since spawnEnemy does not change the external scope, and it only sets a new enemy to a pointer locally,
it creates a problem of not assigning it, and a problem of a memory leak.
There is a runtime error, because after calling spawnEnemy orc is still nullptr.
There is a memory leak because a new heap-allocated object wasn't assigned to any pointer.

To fix it we can make a function return a pointer of a new object
Enemy* spawnEnemy() {
    return new Enemy(100);
}


*/
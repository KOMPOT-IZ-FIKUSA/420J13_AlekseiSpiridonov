/*

class Item {
    std::string* description;
public:
    Item(const std::string& desc) {
        description = new std::string(desc);
    }
    ~Item() {
        delete description;
    }
    void printDescription() {
        std::cout << "Item: " << *description << std::endl;
    }
};

class Player {
    Item* equippedItem;
public:
    Player(Item* item) : equippedItem(item) {}
    ~Player() {
        delete equippedItem;
    }
    void printEquippedItem() {
        equippedItem->printDescription();
    }
};

int main() {
        if(true)
        {
            Item* potion = new Item("Health Potion");
            Player player1(potion);
            player1.printEquippedItem();

            delete potion;  // What happens here?
    }
    return 0;
}

Issue 1: std::string is not a valid name since iostream is not included.
Issue 2: delete potion deletes it,
but later a player object also attempts to delete it when player's destroyer is called when it leaves the while {} scope

using delete keyword twice on the same memory cell causes a runtime error.

This issue can be fixed by either not calling the destructor of the item in the player's destructor to reuse the item later,
or by creating an item inside of the player, for example, by copying.


*/
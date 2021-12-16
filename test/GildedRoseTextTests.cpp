#include <cstdio>
#include "GildedRose.h"

int print_item(Item *item) {
    return printf("%s, %d, %d\n", item->name.c_str(), item->sellIn, item->quality);
}

int main() {
    vector<Item *> items;

    items.emplace_back(new Item("+5 Dexterity Vest", 10, 20));
    items.emplace_back(new Item("Aged Brie", 2, 0));
    items.emplace_back(new Item("Elixir of the Mongoose", 5, 7));
    items.emplace_back(new Item("Sulfuras, Hand of Ragnaros", 0, 80));
    items.emplace_back(new Item("Sulfuras, Hand of Ragnaros", -1, 80));
    items.emplace_back(new Item("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.emplace_back(new Item("Backstage passes to a TAFKAL80ETC concert", 10, 49));
    items.emplace_back(new Item("Backstage passes to a TAFKAL80ETC concert", 5, 49));

    // this Conjured item doesn't yet work properly
    items.emplace_back(new Item("Conjured Mana Cake", 3, 6));

    puts("OMGHAI!");

    GildedRose app(items);

    int days = 3;
    for (int day = 0; day <= days; day++) {
        printf("-------- day %d --------\n", day);
        printf("name, sellIn, quality\n");
        for (auto item : items) {
            print_item(item);
        }
        printf("\n");
        app.updateQuality();
    }
    return 0;
}



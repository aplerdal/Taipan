# Taipan
A modern reimagining of the game Taipan!

## Ideas box
- Multiplayer (vs/coop)
- Business Rival
- Basic story

## Gameplay
The main gameplay will revolve around operating a trading company.
### Game Loop
#### Early game
You start as the captain of a clipper ship with the choice of starting on any of several ports:
- Hong Kong (British, 1842)
- Batvia (Dutch, 1600s)
- Manila (Spain, later US in 1869)
- Saigon (French)
- Singapore (British)

Initially you can make money buying and selling at different ports. These ports include all starting locations as well as:
- Shanghai, CN
- Nagasaki, JP
- Edo, JP (Became Tokyo in 1868)
- Canton, CN (European name)
- ?maybe? Tianjin, CN
- Calcutta, IN (Under british control, old name)
#### Mid Game
Once you build up enough money you can begin to get involved in western trade routes. In game this operates as hiring a 3rd party to transport goods. This is risky as you only have outdated prices, but the western prices are nearly always higher than nearby ports. these ports include;
- London, England
- Amsterdam, Dutch Republic
- Le Havre, France
- Antwerp, Belgium
- San Fransisco, US (After 1860)
#### Late Game
TODO: figure out what would be interesting to do when you are this rich. Ideas:
- Influence market to make money
- Nothing just keep existing gameplay
### Game elements
#### Resources
A "resource" is anything that can be bought or sold in game. A working list of resources is as follows:
- Silk
- Tea
- Weapons
- Opium
- Silver

### Economy
The game operates in 1/3s of months (early, mid, late), all economics are at a this scale.

All ports have an interconnected economy, albiet a delayed transportationn connection. Each port has a simulated supply and demand that determine the price of an item. An excess of supply at a given port will lead to the supply from said port being distributed to ports with lower supply and higher demand. As telegram was already established throughout the majority of the region, we will assume instant communication.

Each city has begining production and "want" values. The production for products is relatively stable year to year, although they may change according to growing seasons etc, this value is used alongside an import amount to determine the supply. The "want" value represents the amount people want the resource, this is used alongside exports to determine the demand.

The economy operates on a schedule of imports. Each shipment will immediately export the amount from the supply of the current location and schedule an increase at the destination in x portions of a month unless an event (storms, etc.) prevents it.

Some things to balance:
- Storing resources may make a ridiculous amount of money when selling out of season due to a limited supply and similar demand. Maybe allow AI traders to do this (or we can have seperate storage amounts that affect supply)?
# Sources
Some sources that were either used or could be useful or interesting in the future.
- [China Clippers](https://archive.org/details/cu31924024151957/page/n15/mode/2up?view=theater)
- *Hamilton, Lindsay H.*, Is the War With China a Just One? (1840) [Google Books](https://books.googleusercontent.com/books/content?req=AKW5QaeHi-nS3_XHy4gVLMhbZYrWqMU1Tu64AFKVRXwQ9tYeU0aVuGBjLf0LVKKeLoqyGrN0u29Hlz-HyIfFvYyDVUp7v2FKO1i2UrcxB-3j_81Iy4T26pzzslvIhk3GK99LH47NKU9q4XWzmoY7c6QmarJ6sZFF9OKyrax-_WV_Ndr0sI73vV1x-SF4wMJLt5l4qTItmyw1L20C6SIQghUOKZevaXlEhZ62pmpr4Gq3a9eUgDuF_qvcgs8jHz75sg6B0rH2MLw4tyjE1pMYw5Yq4MM75jyFuA)
  - pg 14. has trading processes
- House of Commons, *Hansard*, Esp. Apr 7-9, 1840, cols. 669-951 [Uk Parliment](https://api.parliament.uk/historic-hansard/commons/1840/apr/07/war-with-china)
  - Has interesting perspective on the British thought process for the Anglo-English war
- *Gelber, Harry G.*, China as "Victim"? The Opium War That Wasn't [Havard CES](https://ces.fas.harvard.edu/uploads/files/Working-Papers-Archives/CES_WP136.pdf)

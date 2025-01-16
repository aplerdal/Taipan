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

#### Economy
The game operates in months, all economics are at a one month scale.

All ports have a slightly interconnected economy, albiet a delayed connection. Each port has a simulated supply and demand that determine the price of an item. And excess of supply at a given port will lead to the supply from said port be distributed to ports with lower supply and higher demand, taking account for the speed of information.

For example:\
We are visiting Calcutta, and there is an excess of supply at the moment. For the sake of explaination, let's say Hong Kong is 2 months away. The last time there was contact with Hong Kong there was an excess of demand, and a limited supply, so independent of the player's actions, demand in Calcutta rises accordingly and that excess supply is relocated to Hong Kong. There are some potential issues with this system, like several cities suddenly trasfering a large portion of their supply to a single other, but it might be evened out by others.

# Sources
Some sources that were either used or could be useful or interesting in the future.
- [China Clippers](https://archive.org/details/cu31924024151957/page/n15/mode/2up?view=theater)

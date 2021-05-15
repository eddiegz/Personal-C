an=int(input('How many antennas?\n'))
eye=int(input('How many eyes?\n'))

if an<=2 and eye<=3:
    print('GraemeMercurian')
    if an<=6 and eye>=2:
        print('VladSaturnian')
elif an<=6 and eye>=2:
    print('VladSaturnian')
    if an>=3 and eye<=4:
        print('TroyMartian')
elif an>=3 and eye<=4:
    print('TroyMartian')
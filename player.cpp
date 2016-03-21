bool Player::canSeeCreature(const Creature* creature) const
{
if(creature == this)
return true;
    const Player* player = creature->getPlayer();
    const Player* playercid = this->getPlayer();
    if (player->getParty() && playercid->getParty() && player->getParty() == playercid->getParty())
    {
        return true;
    }
if(const Player* player = creature->getPlayer())
return !player->isGhost() || (getAccess() > 2 && getGhostAccess() >= player->getGhostAccess());
return !creature->isInvisible() || canSeeInvisibility();
}

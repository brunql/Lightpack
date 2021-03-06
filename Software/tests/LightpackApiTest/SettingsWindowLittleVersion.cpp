/*
 * SettingsWindowLittleVersion.cpp
 *
 *  Created on: 04.11.2011
 *     Project: Lightpack
 *
 *  Copyright (c) 2011 Mike Shatohin, mikeshatohin [at] gmail.com
 *
 *  Lightpack a USB content-driving ambient lighting system
 *
 *  Lightpack is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Lightpack is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "SettingsWindowLittleVersion.hpp"

void SettingsWindowLittleVersion::requestBacklightStatus()
{
    emit resultBacklightStatus(m_status);
    m_isDone = true;
}

void SettingsWindowLittleVersion::setLedColors(QList<QRgb> colors)
{
    m_colors = colors;
    m_isDone = true;
}

void SettingsWindowLittleVersion::setSmooth(int value)
{
    m_smooth = value;
    m_isDone = true;
}

void SettingsWindowLittleVersion::setGamma(double value)
{
    m_gamma = value;
    m_isDone = true;
}

void SettingsWindowLittleVersion::setBrightness(int value)
{
    m_brightness = value;
    m_isDone = true;
}

void SettingsWindowLittleVersion::setProfile(QString profile)
{
    m_profile = profile;
    m_isDone = true;
}

void SettingsWindowLittleVersion::setStatus(Backlight::Status status)
{
    m_status = status;
    m_isDone = true;
}

void SettingsWindowLittleVersion::onApiServer_ErrorOnStartListening(QString /*errorMessage*/)
{
    m_isErrorCallbackWorksFine = true;
    m_isDone = true;
}

void SettingsWindowLittleVersion::setIsEnabledApiAuth(bool isEnabled)
{
    emit enableApiAuth(isEnabled);
}

void SettingsWindowLittleVersion::setApiKey(const QString & apiKey)
{
    emit updateApiKey(apiKey);
}

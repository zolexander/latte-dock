# Maintainer: Your Name <your.email@example.com>
# Contributor: Michail Vourlakos <mvourlakos@gmail.com>
# Contributor: Smith Ar <audoban@openmailbox.org>

pkgname=latte-dock
pkgver=0.10.240
pkgrel=1
pkgdesc="A dock based on Plasma Frameworks that provides an elegant and intuitive experience for your panels"
arch=('x86_64' 'aarch64')
url="https://userbase.kde.org/LatteDock"
license=('GPL-2.0-or-later' 'LGPL-2.0-or-later' 'LGPL-2.1-only' 'LGPL-3.0-only' 'CC0-1.0')
depends=(
    'qt6-base'
    'qt6-declarative'
    'karchive'
    'kconfig'
    'kcoreaddons'
    'kcrash'
    'kdbusaddons'
    'kdeclarative'
    'kguiaddons'
    'ki18n'
    'kiconthemes'
    'kio'
    'kirigami'
    'knewstuff'
    'knotifications'
    'kpackage'
    'ksvg'
    'kwayland'
    'kwindowsystem'
    'kxmlgui'
    'plasma-workspace'
    'kactivitymanagerd'
    'libxkbcommon'
    'libxcb'
    'libx11'
)
makedepends=(
    'cmake'
    'extra-cmake-modules'
    'plasma-wayland-protocols'
    'wayland'
)
optdepends=(
    'breeze-icons: Default icons'
)
source=()
sha256sums=()
options=('!strip')

build() {
    cd /home/zolexander/latte-dock

    if [ ! -d build ]; then
        mkdir build
    fi

    cd build

    cmake .. \
        -DCMAKE_BUILD_TYPE=Debug \
        -DCMAKE_INSTALL_PREFIX=/usr \
        -DKDE_L10N_AUTO_TRANSLATIONS=OFF \
        -DENABLE_MAKE_UNIQUE=OFF \
        -Wno-dev

    cmake --build .
}

check() {
    :
}

package() {
    cd /home/zolexander/latte-dock/build
    DESTDIR="${pkgdir}" cmake --install .
}

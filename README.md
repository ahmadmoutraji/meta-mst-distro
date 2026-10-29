# meta-mst-distro

Yocto Project distribution layer for MST projects, compatible with the
Scarthgap release.

## Dependencies

This layer depends on:

- OpenEmbedded Core (`core`)
- `meta-poky` (`yocto`)

## Usage

Add `meta-mst-distro` to `BBLAYERS` and select the MST Wayland distribution in
`conf/local.conf`:

```bitbake
DISTRO = "mst-wayland"
```

## License

MIT. See `LICENSE`.
